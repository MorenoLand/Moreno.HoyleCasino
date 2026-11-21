// FUN_006500a0  006500a0

int FUN_006500a0(int param_1,char param_2)

{
  int iVar1;
  
  if ((param_1 < 0) || (iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(), iVar1 <= param_1)) {
    FUN_005e9f20("playerIndex >= 0 && playerIndex < shell->GetMaxPlayersInAnyGame()",
                 "..\\casinoShell\\room.cpp",0x576);
  }
  iVar1 = FUN_00639110(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_00639110(param_1), *(int *)(iVar1 + 0x18) != 0)) {
    iVar1 = FUN_00639110(param_1);
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x18) + 0x4c))();
    return iVar1 + (-(uint)(param_2 != '\0') & 0xffffff9f) + 0x65;
  }
  return -1;
}

