// FUN_00676b30  00676b30

void * __thiscall FUN_00676b30(void *param_1,uint param_2)

{
  FUN_00676700();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

