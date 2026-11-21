// FUN_006252a0  006252a0

void * __thiscall FUN_006252a0(void *param_1,uint param_2)

{
  FUN_00624ef0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

