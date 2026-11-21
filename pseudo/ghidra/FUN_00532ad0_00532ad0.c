// FUN_00532ad0  00532ad0

void * __thiscall FUN_00532ad0(void *param_1,uint param_2)

{
  FUN_0052f890();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

