// FUN_005f5010  005f5010

void __fastcall FUN_005f5010(int param_1)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(DAT_015e55e8 + 0x14);
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005f8ba0(param_1);
    cVar1 = FUN_005f54a0();
    if (cVar1 != '\0') {
      local_8 = *(undefined4 *)(param_1 + 0x1c);
      local_c = *(undefined4 *)(param_1 + 0x18);
      local_10 = *(undefined4 *)(param_1 + 0x14);
      local_14 = *(undefined4 *)(param_1 + 0x10);
      FUN_005f5940(&local_14);
    }
    FUN_0060c890(param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}

