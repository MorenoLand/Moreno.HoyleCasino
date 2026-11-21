// FUN_005ac560  005ac560

void __thiscall FUN_005ac560(int param_1,int param_2,undefined1 param_3)

{
  short sVar1;
  int local_c;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x16; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x28 + param_2 * 0x58 + local_8 * 4) + 0x70))();
  }
  for (local_c = 0; local_c < 0x16; local_c = local_c + 1) {
    sVar1 = FUN_005b5c60(*(undefined4 *)(param_1 + 4),param_2,local_c);
    if (sVar1 != 0) {
      FUN_005a82a0(*(undefined4 *)(param_1 + 4),param_2,local_c,param_3);
    }
  }
  return;
}

