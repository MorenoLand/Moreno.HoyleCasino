// FUN_00594670  00594670

void * __thiscall FUN_00594670(void *param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    FUN_00590a50();
    if ((param_2 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_(param_1,0x1e8,*(int *)((int)param_1 + -4),FUN_00590a50);
    if ((param_2 & 1) != 0) {
      operator_delete((void *)((int)param_1 + -4));
    }
    param_1 = (void *)((int)param_1 + -4);
  }
  return param_1;
}

