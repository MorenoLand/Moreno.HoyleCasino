// FUN_005ff270  005ff270

void * __thiscall FUN_005ff270(void *param_1,uint param_2)

{
  FUN_005fd950();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

