// FUN_00665cb0  00665cb0

void FUN_00665cb0(void)

{
  FILE *_File;
  undefined4 extraout_var;
  undefined4 uVar1;
  
  strcpy(&DAT_007952c4,&DAT_007950bc);
  uVar1 = extraout_var;
  strcat(&DAT_007952c4,&DAT_00795a44);
  _File = (FILE *)FUN_005ea9c0(&DAT_007952c4,&DAT_006c2d28,uVar1);
  if (_File == (FILE *)0x0) {
    strcpy(&DAT_007952c4,&DAT_00795a44);
  }
  else {
    fclose(_File);
  }
  return;
}

