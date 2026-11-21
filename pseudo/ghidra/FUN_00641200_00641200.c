// FUN_00641200  00641200

void * __thiscall FUN_00641200(void *param_1,uint param_2)

{
  FUN_00640db0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

