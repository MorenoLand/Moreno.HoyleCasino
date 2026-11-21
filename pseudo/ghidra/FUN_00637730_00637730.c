// FUN_00637730  00637730

undefined1 FUN_00637730(char param_1)

{
  int iVar1;
  undefined1 local_1c;
  
  if (param_1 == '\0') {
    FUN_006375b0();
    iVar1 = FUN_0063aac0();
    local_1c = *(undefined1 *)(iVar1 + 0x5a);
  }
  else {
    FUN_006375b0();
    iVar1 = FUN_0063aac0();
    if ((*(char *)(iVar1 + 0x5a) == '\0') || (DAT_00795f94 != '\0')) {
      local_1c = 0;
    }
    else {
      local_1c = 1;
    }
  }
  return local_1c;
}

