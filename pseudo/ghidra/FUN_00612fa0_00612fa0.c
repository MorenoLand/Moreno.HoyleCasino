// FUN_00612fa0  00612fa0

void FUN_00612fa0(void *param_1,int param_2)

{
  if (param_1 != (void *)0x0) {
    if (param_2 == 0x1c) {
      *(void **)((int)param_1 + 0x18) = DAT_015e5600;
      DAT_015e5600 = param_1;
    }
    else {
      operator_delete(param_1);
    }
  }
  return;
}

