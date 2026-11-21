// FUN_00604d80  00604d80

void __thiscall
FUN_00604d80(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
            undefined4 param_13)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x40))();
  FUN_005f53e0(param_13);
  param_1[0x20] = param_10;
  param_1[0x14] = param_11;
  param_1[0x15] = param_12;
  *(int *)(param_1[0x13] + 4) = param_1[1];
  FUN_005eae80(param_2,param_3,param_4,param_5,0xffffffff);
  *(int *)(param_1[0x12] + 4) = param_1[1];
  cVar1 = FUN_006050f0();
  if (cVar1 == '\0') {
    param_1[0x19] = param_4 + param_8;
    param_1[0x1a] = param_4 + param_9;
    param_1[0x18] = 0;
    param_1[0x17] = 0;
    FUN_005eae80(param_6,param_3 + param_7,0,param_5 + 1,0xffffffff);
  }
  else {
    param_1[0x17] = param_3 + param_8;
    param_1[0x18] = param_3 + param_9;
    param_1[0x1a] = 0;
    param_1[0x19] = 0;
    FUN_005eae80(param_6,0,param_4 + param_7,param_5 + 1,0xffffffff);
  }
  return;
}

