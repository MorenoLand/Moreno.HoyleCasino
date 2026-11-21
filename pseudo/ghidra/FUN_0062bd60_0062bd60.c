// FUN_0062bd60  0062bd60

void FUN_0062bd60(FILE *param_1,FILE *param_2,uint param_3)

{
  void *_DstBuf;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_8;
  
  local_8 = param_3;
  _DstBuf = operator_new(0x4000);
  while (local_8 != 0) {
    if (local_8 < 0x4001) {
      local_1c = local_8;
    }
    else {
      local_1c = 0x4000;
    }
    fread(_DstBuf,local_1c,1,param_2);
    if (local_8 < 0x4001) {
      local_20 = local_8;
    }
    else {
      local_20 = 0x4000;
    }
    fwrite(_DstBuf,local_20,1,param_1);
    if (local_8 < 0x4001) {
      local_8 = 0;
    }
    else {
      local_8 = local_8 - 0x4000;
    }
  }
  operator_delete(_DstBuf);
  return;
}

