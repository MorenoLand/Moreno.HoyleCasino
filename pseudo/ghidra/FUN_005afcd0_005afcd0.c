// FUN_005afcd0  005afcd0

void __thiscall FUN_005afcd0(int param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_005b7460(0);
  }
  FUN_005db9b0();
  if (*(char *)(DAT_00793604 + 0x678) == '\0') {
    *(undefined1 *)(DAT_00793604 + 0x678) = 1;
    (**(code **)(**(int **)(param_1 + 4) + 8))(1,0);
  }
  else {
    *(undefined1 *)(DAT_00793604 + 0x678) = 0;
    FUN_005b6a60();
    FUN_005aef40(0);
  }
  if (param_2 != '\0') {
    *(undefined1 *)(DAT_00793604 + 0x678) = 1;
  }
  return;
}

