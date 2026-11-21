// FUN_00549b10  00549b10

void __fastcall FUN_00549b10(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int local_8;
  
  cVar1 = FUN_00549910();
  if (cVar1 == '\0') {
    FUN_005e9f20("CanAffordDoubleBet()","..\\Casino\\videoblackjackstate.cpp",0x2bf);
  }
  local_8 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 4) < local_8) {
    if (*(int *)(param_1 + 4) != 0) {
      local_8 = local_8 - *(int *)(param_1 + 4);
      FUN_005d0a20(0);
    }
    piVar2 = (int *)FUN_005d0c30(local_18,local_8);
    local_10 = *piVar2;
    local_c = piVar2[1];
    cVar1 = FUN_005d0d60(local_8);
    if (cVar1 != '\0') {
      local_10 = -local_10;
      local_c = -local_c;
      FUN_005d1420(local_10,local_c);
    }
  }
  else {
    FUN_005d0a20(*(int *)(param_1 + 4) - local_8);
  }
  return;
}

