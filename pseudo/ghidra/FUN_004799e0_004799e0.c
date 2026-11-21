// FUN_004799e0  004799e0

/* WARNING: Removing unreachable block (ram,0x00479aab) */
/* WARNING: Removing unreachable block (ram,0x00479abc) */
/* WARNING: Removing unreachable block (ram,0x00479b02) */
/* WARNING: Removing unreachable block (ram,0x00479b72) */
/* WARNING: Removing unreachable block (ram,0x00479b65) */
/* WARNING: Removing unreachable block (ram,0x00479b79) */
/* WARNING: Removing unreachable block (ram,0x00479bb6) */
/* WARNING: Removing unreachable block (ram,0x00479ba9) */
/* WARNING: Removing unreachable block (ram,0x00479bbd) */
/* WARNING: Removing unreachable block (ram,0x00479bfd) */
/* WARNING: Removing unreachable block (ram,0x00479bf0) */
/* WARNING: Removing unreachable block (ram,0x00479c04) */
/* WARNING: Removing unreachable block (ram,0x00479d2f) */
/* WARNING: Removing unreachable block (ram,0x00479d22) */
/* WARNING: Removing unreachable block (ram,0x00479d36) */
/* WARNING: Removing unreachable block (ram,0x00479e88) */
/* WARNING: Removing unreachable block (ram,0x00479e7b) */
/* WARNING: Removing unreachable block (ram,0x00479e8f) */
/* WARNING: Removing unreachable block (ram,0x00479fc9) */
/* WARNING: Removing unreachable block (ram,0x00479fb9) */
/* WARNING: Removing unreachable block (ram,0x00479fd3) */
/* WARNING: Removing unreachable block (ram,0x0047a110) */
/* WARNING: Removing unreachable block (ram,0x0047a100) */
/* WARNING: Removing unreachable block (ram,0x0047a11a) */
/* WARNING: Removing unreachable block (ram,0x0047a1c6) */
/* WARNING: Removing unreachable block (ram,0x0047a1b6) */
/* WARNING: Removing unreachable block (ram,0x0047a1d0) */
/* WARNING: Removing unreachable block (ram,0x0047a2f9) */
/* WARNING: Removing unreachable block (ram,0x0047a2cb) */
/* WARNING: Removing unreachable block (ram,0x0047a2ef) */
/* WARNING: Removing unreachable block (ram,0x0047a2e5) */
/* WARNING: Removing unreachable block (ram,0x0047a2f7) */
/* WARNING: Removing unreachable block (ram,0x0047a301) */

void __fastcall FUN_004799e0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_68;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069fe82;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006375d0(0xb);
  FUN_0047aab0(0,0);
  pvVar2 = operator_new(0x204);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_00465760(uVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = local_68;
  FUN_005f87d0();
  (**(code **)(**(int **)(param_1 + 0x28) + 0x3c))();
  FUN_0047cb10(1);
                    /* WARNING: Could not recover jumptable at 0x00479aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_0047a328 + (uint)(byte)PTR_DAT_0047a330 * 4))();
  return;
}

