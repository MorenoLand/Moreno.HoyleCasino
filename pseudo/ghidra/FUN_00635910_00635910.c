// FUN_00635910  00635910

void __thiscall FUN_00635910(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  if (((DAT_0163069c == 0) || (piVar1 = (int *)FUN_0063aac0(), *piVar1 != 0)) &&
     (iVar2 = (**(code **)(*param_1 + 0xe0))(param_3), iVar2 != 0)) {
    piVar1 = (int *)(**(code **)(*param_1 + 0xe0))(param_3);
    (**(code **)(*piVar1 + 0x60))(param_2);
  }
  return;
}

