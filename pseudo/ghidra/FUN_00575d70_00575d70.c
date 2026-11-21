// FUN_00575d70  00575d70

/* WARNING: Removing unreachable block (ram,0x00575d8f) */
/* WARNING: Removing unreachable block (ram,0x00575d93) */
/* WARNING: Removing unreachable block (ram,0x00575daa) */

void __thiscall FUN_00575d70(int param_1,int param_2)

{
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) - param_2;
  FUN_005777d0(*(undefined4 *)(param_1 + 0x70));
  if ((*(int *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x74) == 0)) {
    (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(2);
    (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(0);
  }
  return;
}

