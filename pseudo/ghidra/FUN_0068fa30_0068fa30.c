// FUN_0068fa30  0068fa30

void FUN_0068fa30(uint param_1)

{
  char *local_14;
  undefined **local_10 [3];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 0x48) {
    local_14 = (char *)0x0;
    std::exception::exception((exception *)local_10,&local_14);
    local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_10,(ThrowInfo *)&DAT_006fc670);
  }
  operator_new(param_1 * 0x48);
  return;
}

