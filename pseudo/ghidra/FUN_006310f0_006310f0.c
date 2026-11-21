// FUN_006310f0  006310f0

void FUN_006310f0(void)

{
  FILE *_File;
  size_t _ElementSize;
  
  _File = (FILE *)FUN_005ea9c0("dialogs.txt",&DAT_006d8524);
  if (_File == (FILE *)0x0) {
    FUN_0062ff10("Dialog Resource file (dialogs.txt) not found.  Unable to run.","Error",0);
  }
  else {
    _ElementSize = FUN_005e9fd0(_File);
    DAT_0162ee64 = operator_new(_ElementSize + 1);
    fread(DAT_0162ee64,_ElementSize,1,_File);
    *(undefined1 *)((int)DAT_0162ee64 + _ElementSize) = 0;
    fclose(_File);
  }
  return;
}

