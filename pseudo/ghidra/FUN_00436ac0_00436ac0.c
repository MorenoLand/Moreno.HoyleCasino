// FUN_00436ac0  00436ac0

void __fastcall FUN_00436ac0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0062fbf0(6);
  *(int *)(param_1 + 0xacc) = iVar1 + 1;
  iVar1 = FUN_0062fbf0(6);
  *(int *)(param_1 + 0xad0) = iVar1 + 1;
  iVar1 = FUN_00607960("CrapsDie0",0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xacc) = iVar1;
  }
  iVar1 = FUN_00607960("CrapsDie1",0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xad0) = iVar1;
  }
  return;
}

