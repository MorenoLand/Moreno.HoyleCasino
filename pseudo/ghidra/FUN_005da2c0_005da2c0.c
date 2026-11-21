// FUN_005da2c0  005da2c0

int FUN_005da2c0(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(), iVar1 <= param_1)) {
    FUN_005e9f20("playerIndex >= 0 && playerIndex < shell->GetMaxPlayersInAnyGame()",
                 "..\\Casino\\casinoroom.cpp",0x3bf);
  }
  iVar1 = FUN_00639110(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_00639110(param_1), *(int *)(iVar1 + 0x18) != 0)) {
    iVar1 = FUN_00639110(param_1);
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x18) + 0x54))();
    return iVar1 + 0x2c;
  }
  return -1;
}

