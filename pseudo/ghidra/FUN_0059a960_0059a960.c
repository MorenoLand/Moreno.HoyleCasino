// FUN_0059a960  0059a960

void __thiscall FUN_0059a960(undefined4 param_1,undefined4 param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_10;
  
  iVar3 = (**(code **)(*DAT_007935cc + 0x2b0))(param_1);
  iVar4 = (**(code **)(*DAT_007935cc + 0x2b4))();
  local_10 = *param_3 * 3;
  if (local_10 % 5 != 0) {
    local_10 = (5 - local_10 % 5) + local_10;
  }
  iVar1 = iVar3;
  if ((iVar3 <= local_10) && (iVar1 = local_10, iVar4 < local_10)) {
    iVar1 = iVar4;
  }
  while (local_10 = iVar1, cVar2 = FUN_0059a6c0(param_2,local_10), cVar2 == '\0') {
    iVar1 = local_10 + -5;
  }
  if (local_10 < iVar3) {
    local_10 = 0;
  }
  if (iVar4 < local_10) {
    FUN_005e9f20("theBet <= maxBet","..\\Casino\\bigraiseai.cpp",0x73);
  }
  uVar5 = FUN_0064c8a0(local_10,0);
  *param_4 = uVar5;
  return;
}

