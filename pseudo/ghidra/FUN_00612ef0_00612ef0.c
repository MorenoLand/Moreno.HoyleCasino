// FUN_00612ef0  00612ef0

void * FUN_00612ef0(uint param_1)

{
  void *pvVar1;
  int local_10;
  
  if (param_1 == 0x1c) {
    if (DAT_015e5600 == (void *)0x0) {
      pvVar1 = operator_new(0x380);
      for (local_10 = 1; local_10 < 0x1f; local_10 = local_10 + 1) {
        *(void **)((int)pvVar1 + local_10 * 0x1c + 0x18) =
             (void *)((local_10 + 1) * 0x1c + (int)pvVar1);
      }
      *(undefined4 *)((int)pvVar1 + 0x37c) = 0;
      DAT_015e5600 = (void *)((int)pvVar1 + 0x1c);
    }
    else {
      pvVar1 = DAT_015e5600;
      DAT_015e5600 = *(void **)((int)DAT_015e5600 + 0x18);
    }
  }
  else {
    pvVar1 = operator_new(param_1);
  }
  return pvVar1;
}

