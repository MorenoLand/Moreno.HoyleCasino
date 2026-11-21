// FUN_005e9fd0  005e9fd0

void FUN_005e9fd0(FILE *param_1)

{
  int _FileHandle;
  
  _FileHandle = _fileno(param_1);
  _filelength(_FileHandle);
  return;
}

