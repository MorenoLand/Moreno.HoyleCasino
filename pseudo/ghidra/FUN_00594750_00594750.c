// FUN_00594750  00594750

void * __thiscall FUN_00594750(void *param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    FUN_005eac00();
    if ((param_2 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_(param_1,0x178,*(int *)((int)param_1 + -4),FUN_005eac00);
    if ((param_2 & 1) != 0) {
      operator_delete((void *)((int)param_1 + -4));
    }
    param_1 = (void *)((int)param_1 + -4);
  }
  return param_1;
}

