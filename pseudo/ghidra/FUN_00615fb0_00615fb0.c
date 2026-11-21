// FUN_00615fb0  00615fb0

void * __thiscall FUN_00615fb0(void *param_1,uint param_2)

{
  FUN_00615c00();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

