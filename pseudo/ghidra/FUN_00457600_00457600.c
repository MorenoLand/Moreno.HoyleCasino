// FUN_00457600  00457600

int FUN_00457600(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;
  int local_8;
  
  local_8 = 0;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if ((local_14 != param_1) && (local_14 != 4)) {
      cVar1 = FUN_00461f10(local_14);
      if (cVar1 != '\0') {
        uVar2 = FUN_00457320(local_14);
        iVar3 = FUN_00457590(uVar2);
        local_8 = iVar3 + local_8;
      }
    }
  }
  if (50000 < local_8) {
    local_8 = 50000;
  }
  return local_8;
}

