// FUN_005f5300  005f5300

void __thiscall FUN_005f5300(int param_1,int param_2)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (((param_2 != *(int *)(param_1 + 0x20)) &&
      (((*(int *)(param_1 + 0x20) = param_2, *(int *)(param_1 + 4) != 0 ||
        (*(int *)(param_1 + 0x28) != 0)) && (FUN_005f8dd0(param_1), *(int *)(param_1 + 4) != 0))))
     && ((*(int *)(param_1 + 0x28) != 0 && (cVar1 = FUN_005f54a0(), cVar1 != '\0')))) {
    local_8 = *(undefined4 *)(param_1 + 0x1c);
    local_c = *(undefined4 *)(param_1 + 0x18);
    local_10 = *(undefined4 *)(param_1 + 0x14);
    local_14 = *(undefined4 *)(param_1 + 0x10);
    FUN_005f5940(&local_14);
  }
  return;
}

