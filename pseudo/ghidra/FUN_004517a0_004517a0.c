// FUN_004517a0  004517a0

void __thiscall FUN_004517a0(int param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 extraout_var;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (6 < local_8) {
      return;
    }
    uVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    cVar1 = FUN_00450c20(uVar2);
    if (cVar1 != '\0') break;
    local_8 = local_8 + 1;
  }
  uVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
  *param_4 = uVar2;
  iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
  if ((iVar3 == 0xe) &&
     (iVar3 = FUN_0044f6c0(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_8 * 2))),
     iVar3 == -1)) {
    *param_2 = local_8 + 1;
    *param_3 = local_8;
    return;
  }
  *param_2 = local_8;
  *param_3 = local_8 + 1;
  return;
}

