------------------------------------------------------------------------------
--                                                                          --
--                         GNAT RUN-TIME COMPONENTS                         --
--                                                                          --
--      A D A . W I D E _ W I D E _ T E X T _ I O . I N T E G E R _ I O     --
--                                                                          --
--                                 S p e c                                  --
--                                                                          --
-- This specification is derived from the Ada Reference Manual for use with --
-- GNAT.  In accordance with the copyright of that document, you can freely --
-- copy and modify this specification,  provided that if you redistribute a --
-- modified version,  any changes that you have made are clearly indicated. --
--                                                                          --
------------------------------------------------------------------------------

--  In Ada 95, the package Ada.Wide_Wide_Text_IO.Integer_IO is a subpackage
--  of Wide_Wide_Text_IO. In GNAT we make it a child package to avoid loading
--  the necessary code if Integer_IO is not instantiated. See the routine
--  Rtsfind.Check_Text_IO_Special_Unit for a description of how we patch up
--  the difference in semantics so that it is invisible to the Ada programmer.

private generic
   type Num is range <>;

package Ada.Wide_Wide_Text_IO.Integer_IO is

   Default_Width : Field := Num'Width;
   Default_Base  : Number_Base := 10;

   procedure Get
     (File  : File_Type;
      Item  : out Num;
      Width : Field := 0);

   procedure Get
     (Item  : out Num;
      Width : Field := 0);

   procedure Put
     (File  : File_Type;
      Item  : Num;
      Width : Field := Default_Width;
      Base  : Number_Base := Default_Base);

   procedure Put
     (Item  : Num;
      Width : Field := Default_Width;
      Base  : Number_Base := Default_Base);

   procedure Get
     (From : Wide_Wide_String;
      Item : out Num;
      Last : out Positive);

   procedure Put
     (To   : out Wide_Wide_String;
      Item : Num;
      Base : Number_Base := Default_Base);

end Ada.Wide_Wide_Text_IO.Integer_IO;
