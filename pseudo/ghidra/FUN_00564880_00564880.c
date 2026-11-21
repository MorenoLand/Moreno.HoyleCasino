// FUN_00564880  00564880

void __thiscall FUN_00564880(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0056b950(param_2,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_005604b0(*(undefined4 *)(param_1 + 0x6bc + param_2 * 4));
    FUN_005eaf00(uVar2);
    *(undefined1 *)(param_1 + param_2 + 0x68a) = 1;
    if (*(int *)(param_1 + 0x6bc + param_2 * 4) < 0) {
      (**(code **)(**(int **)(param_1 + 4 + param_2 * 4) + 0xb0))(param_2 << 1);
    }
    else {
      if (*(char *)(DAT_0079343c + 0x2e) == '\0') {
        FUN_00562a00(*(undefined4 *)(param_1 + 0x6bc + param_2 * 4));
      }
      (**(code **)(**(int **)(param_1 + 4 + param_2 * 4) + 0xb0))(param_2 * 2 + 1);
      uVar2 = FUN_0056b710(param_2,param_1 + 0x6bc + param_2 * 4);
      FUN_00560360(*(undefined4 *)(param_1 + 0x6bc + param_2 * 4),uVar2);
      FUN_005664c0(uVar2);
      FUN_00566210();
    }
  }
  return;
}

