// FUN_00548e50  00548e50

bool __fastcall FUN_00548e50(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  cVar1 = FUN_00548eb0(param_1);
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_00548ef0(local_14);
    local_c = -*piVar2;
    local_8 = -piVar2[1];
    FUN_005d1420(local_c,local_8);
  }
  return cVar1 != '\0';
}

