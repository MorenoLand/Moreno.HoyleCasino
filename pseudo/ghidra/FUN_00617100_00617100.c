// FUN_00617100  00617100

void FUN_00617100(FILE *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint _Count;
  void *_DstBuf;
  size_t sVar1;
  
  _Count = FUN_005e9fd0(param_1);
  _DstBuf = operator_new(_Count);
  sVar1 = fread(_DstBuf,1,_Count,param_1);
  if (sVar1 != _Count) {
    FUN_005e9f20("fread(buf, 1, len, inFile) == len","..\\scilib\\platform\\tsprite.cpp",0x1fa);
  }
  FUN_00616ed0(_DstBuf,param_2,param_3,param_4,param_5);
  operator_delete(_DstBuf);
  return;
}

