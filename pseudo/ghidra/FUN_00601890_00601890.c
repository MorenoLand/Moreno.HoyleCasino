// FUN_00601890  00601890

void * __thiscall FUN_00601890(void *param_1,uint param_2)

{
  FUN_00600c90();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

