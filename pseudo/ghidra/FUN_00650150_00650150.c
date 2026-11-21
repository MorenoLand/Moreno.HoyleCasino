// FUN_00650150  00650150

int FUN_00650150(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(), iVar1 <= param_1)) {
    FUN_005e9f20("playerIndex >= 0 && playerIndex < shell->GetMaxPlayersInAnyGame()",
                 "..\\casinoShell\\room.cpp",0x585);
  }
  iVar1 = FUN_00639110(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_00639110(param_1), *(int *)(iVar1 + 0x18) != 0)) {
    iVar1 = FUN_00639110(param_1);
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x18) + 0x54))();
    return iVar1 + 0x21;
  }
  return -1;
}

