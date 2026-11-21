// FUN_00627d60  00627d60

void __thiscall
FUN_00627d60(int param_1,void *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  void *pvVar1;
  
  FUN_00627180(param_4,param_5,param_6,param_7,param_8,param_9);
  if (param_3 != 0) {
    pvVar1 = operator_new(-(uint)((int)((ulonglong)param_3 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)param_3 * 4));
    *(void **)(param_1 + 0x60) = pvVar1;
    memcpy(*(void **)(param_1 + 0x60),param_2,param_3 << 2);
    *(uint *)(param_1 + 100) = param_3;
  }
  return;
}

