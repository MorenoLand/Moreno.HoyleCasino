// FUN_005e9ff0  005e9ff0

undefined4 FUN_005e9ff0(undefined4 param_1)

{
  FILE *_File;
  undefined4 uVar1;
  
  _File = (FILE *)FUN_005ea9c0(param_1,&DAT_006c2d28);
  if (_File == (FILE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_005e9fd0(_File);
    fclose(_File);
  }
  return uVar1;
}

