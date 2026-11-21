// FUN_00606de0  00606de0

void __fastcall FUN_00606de0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))(0);
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  (**(code **)(**(int **)(param_1 + 4) + 0x44))
            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (*(char *)(param_1 + 0xd) != '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x70))();
  }
  FUN_005f6050(0);
  return;
}

