// FUN_00601800  00601800

void * __thiscall FUN_00601800(void *param_1,uint param_2)

{
  FUN_006009b0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

