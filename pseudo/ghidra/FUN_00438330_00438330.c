// FUN_00438330  00438330

undefined1 __fastcall FUN_00438330(int param_1)

{
  char cVar1;
  undefined1 local_14;
  
  cVar1 = FUN_00436a00(2);
  if (cVar1 == '\0') {
LAB_004383ad:
    local_14 = 0;
  }
  else {
    cVar1 = FUN_00437250();
    if (cVar1 == '\0') {
LAB_00438395:
      cVar1 = FUN_00437340();
      if (cVar1 == '\0') goto LAB_004383ad;
    }
    else if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 0xc) goto LAB_00438395;
    local_14 = 1;
  }
  return local_14;
}

