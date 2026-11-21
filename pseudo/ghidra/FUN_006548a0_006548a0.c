// FUN_006548a0  006548a0

void * __thiscall FUN_006548a0(void *param_1,uint param_2)

{
  FUN_00653690();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

