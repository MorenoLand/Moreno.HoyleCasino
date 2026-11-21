// FUN_005450a0  005450a0

void __fastcall FUN_005450a0(undefined4 param_1)

{
  char cVar1;
  char local_5;
  
  FUN_0054ac20(param_1);
  local_5 = '\0';
  cVar1 = FUN_00548d90(&local_5);
  if (cVar1 == '\0') {
    if (local_5 == '\0') {
      cVar1 = FUN_00549640();
      if (cVar1 == '\0') {
        FUN_005448f0(7);
      }
      else {
        FUN_00544860(7);
      }
      cVar1 = FUN_00549720();
      if (cVar1 == '\0') {
        FUN_005448f0(5);
      }
      else {
        FUN_00544860(5);
      }
      cVar1 = FUN_00549770();
      if (cVar1 == '\0') {
        FUN_005448f0(4);
      }
      else {
        FUN_00544860(4);
      }
      cVar1 = FUN_00549a50();
      if (cVar1 == '\0') {
        FUN_005448f0(3);
      }
      else {
        FUN_00544860(3);
      }
    }
    else {
      FUN_00548d20(0);
    }
  }
  else {
    FUN_005448f0(7);
    FUN_005448f0(5);
    FUN_005448f0(4);
    FUN_005448f0(3);
    FUN_00544800();
  }
  return;
}

