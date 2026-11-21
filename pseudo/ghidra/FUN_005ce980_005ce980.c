// FUN_005ce980  005ce980

void __thiscall FUN_005ce980(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(*DAT_007947e0 + 0xe0))(param_2);
  iVar2 = (**(code **)(*piVar1 + 0x9c))();
  DAT_007947e0[0x13bc] = iVar2;
  if (DAT_007947e0[0x13bc] == 0) {
    FUN_005e9f20("epoCasinoShell->tournamentLength","..\\Casino\\casinodialogs.cpp",0x183);
  }
  FUN_005fb3a0(0);
  iVar2 = FUN_00606490();
  DAT_007947e0[0x13bb] = *(int *)(&DAT_0075d33c + iVar2 * 4);
  DAT_007947e0[0x13be] = 1;
  piVar1 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(*(undefined4 *)(param_1 + 0x1bc));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xa8))(param_1);
  }
  return;
}

