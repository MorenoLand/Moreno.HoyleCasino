// FUN_005ad500  005ad500

void __fastcall FUN_005ad500(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 9) == '\0') {
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_005a82a0(4,0,0,0);
    FUN_005b7310(9,4);
    (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
  }
  else {
    iVar1 = FUN_005b5590();
    if (iVar1 == -1) {
      FUN_005b70e0(0xffffffff,0);
      FUN_005a8590();
    }
    else {
      FUN_005b70e0(iVar1,0);
      if (*(char *)(param_1 + 10) == '\0') {
        *(undefined1 *)(param_1 + 10) = 1;
        FUN_005b7310(2,iVar1);
        (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
      }
      else {
        *(undefined1 *)(param_1 + 10) = 0;
        FUN_005b3ce0(iVar1);
        (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
      }
    }
  }
  return;
}

