// FUN_00576740  00576740

void __thiscall FUN_00576740(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (3 < *(int *)(param_1 + 0x74) + param_2) {
    FUN_005e9f20("curBet + numCredits <= MAX_SULTAN_BET","..\\Casino\\sultanslot.cpp",899);
  }
  piVar2 = (int *)FUN_00574cc0(local_1c,param_2);
  local_14 = *piVar2;
  local_10 = piVar2[1];
  puVar5 = &local_c;
  FUN_005dcb00(0,puVar5);
  FUN_005d5ac0(puVar5);
  cVar1 = FUN_0064c6a0(local_14,local_10);
  if (cVar1 != '\0') {
    param_2 = FUN_00574ed0(local_c,local_8);
    piVar2 = (int *)FUN_00574cc0(local_24,param_2);
    local_14 = *piVar2;
    local_10 = piVar2[1];
  }
  FUN_00575e20(*(int *)(param_1 + 0x74) + param_2);
  if (*(int *)(param_1 + 0x74) != 0) {
    (**(code **)(**(int **)(param_1 + 0x50) + 0xcc))();
  }
  iVar3 = -local_14;
  iVar4 = -local_10;
  local_14 = iVar3;
  local_10 = iVar4;
  FUN_005dcb00(0,iVar3,iVar4);
  FUN_005d5fb0(iVar3,iVar4);
  iVar3 = local_14;
  iVar4 = local_10;
  FUN_005dcb00(0,local_14,local_10);
  FUN_005d5cf0(iVar3,iVar4);
  return;
}

