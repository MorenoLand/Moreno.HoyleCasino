// FUN_005e6730  005e6730

void * __thiscall FUN_005e6730(void *param_1,uint param_2)

{
  FUN_005e4480();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

