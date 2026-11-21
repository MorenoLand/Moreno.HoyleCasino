// FUN_006041d0  006041d0

void FUN_006041d0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_var;
  
  iVar1 = FUN_00604460(param_1);
  if (iVar1 == 0) {
    FUN_0062fde0("Freeing an invalid resource!\n",extraout_var);
  }
  else if (0 < *(int *)(iVar1 + 0xc)) {
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  }
  return;
}

