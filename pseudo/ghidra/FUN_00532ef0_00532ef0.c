// FUN_00532ef0  00532ef0

void FUN_00532ef0(void)

{
  undefined4 *local_178;
  undefined4 *local_174;
  undefined4 *local_170;
  undefined4 *local_16c;
  undefined4 *local_168;
  undefined4 *local_164;
  undefined4 *local_160;
  undefined4 *local_15c;
  undefined4 *local_158;
  undefined4 *local_154;
  undefined4 *local_150;
  undefined4 *local_14c;
  undefined4 *local_148;
  undefined4 *local_144;
  undefined4 *local_140;
  undefined4 *local_13c;
  undefined4 *local_138;
  undefined4 *local_134;
  undefined4 *local_130;
  undefined4 *local_12c;
  undefined4 *local_128;
  undefined4 *local_124;
  undefined4 *local_120;
  undefined4 *local_11c;
  undefined4 *local_118;
  undefined4 *local_114;
  undefined4 *local_110;
  undefined4 *local_10c;
  undefined4 *local_108;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4a1e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(*(undefined4 *)(DAT_007947e0 + 0x4f14)) {
  case 0:
    FUN_005e9f20("false","..\\Casino\\slotmachineroom.cpp",0xb4,
                 DAT_00781870 ^ (uint)&stack0xfffffffc);
    break;
  case 1:
    local_10c = operator_new(0x14);
    local_8 = 1;
    if (local_10c == (undefined4 *)0x0) {
      local_10c = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_10c = ClassicSlotMachineUnit::vftable;
      *local_10c = SlotMachineBugOut::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_10c;
    break;
  case 2:
    local_11c = operator_new(0x14);
    local_8 = 5;
    if (local_11c == (undefined4 *)0x0) {
      local_11c = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_11c = ClassicSlotMachineUnit::vftable;
      *local_11c = SlotMachineShoes::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_11c;
    break;
  case 3:
    local_110 = operator_new(0x14);
    local_8 = 2;
    if (local_110 == (undefined4 *)0x0) {
      local_110 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_110 = ClassicSlotMachineUnit::vftable;
      *local_110 = SlotMachineCoverTheSpread::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_110;
    break;
  case 4:
    local_120 = operator_new(0x14);
    local_8 = 6;
    if (local_120 == (undefined4 *)0x0) {
      local_120 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_120 = ClassicSlotMachineUnit::vftable;
      *local_120 = SlotMachineSweetSuccess::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_120;
    break;
  case 5:
    local_124 = operator_new(0x14);
    local_8 = 7;
    if (local_124 == (undefined4 *)0x0) {
      local_124 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_124 = ClassicSlotMachineUnit::vftable;
      *local_124 = SlotMachineMonster::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_124;
    break;
  case 6:
    local_118 = operator_new(0x14);
    local_8 = 4;
    if (local_118 == (undefined4 *)0x0) {
      local_118 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_118 = ClassicSlotMachineUnit::vftable;
      *local_118 = SlotMachineFunnyMoney::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_118;
    break;
  case 7:
    local_114 = operator_new(0x14);
    local_8 = 3;
    if (local_114 == (undefined4 *)0x0) {
      local_114 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_114 = ClassicSlotMachineUnit::vftable;
      *local_114 = SlotMachineFlyingHigh::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_114;
    break;
  case 8:
    local_108 = operator_new(0x14);
    local_8 = 0;
    if (local_108 == (undefined4 *)0x0) {
      local_108 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_108 = ClassicSlotMachineUnit::vftable;
      *local_108 = SlotMachineAlienInvasion::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_108;
    break;
  case 9:
    local_168 = operator_new(0x14);
    local_8 = 0x18;
    if (local_168 == (undefined4 *)0x0) {
      local_168 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_168 = ClassicSlotMachineUnit::vftable;
      *local_168 = SlotMachineProgressiveFruit::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_168;
    break;
  default:
    local_178 = operator_new(0x14);
    local_8 = 0x1c;
    if (local_178 == (undefined4 *)0x0) {
      local_178 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_178 = ClassicSlotMachineUnit::vftable;
      *local_178 = SlotMachineAlienInvasion::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_178;
    break;
  case 0xb:
    local_128 = operator_new(0x14);
    local_8 = 8;
    if (local_128 == (undefined4 *)0x0) {
      local_128 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_128 = LargeFormatSlotMachineUnit::vftable;
      *local_128 = SlotMachineSapphireSea::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_128;
    break;
  case 0xc:
    local_12c = operator_new(0x14);
    local_8 = 9;
    if (local_12c == (undefined4 *)0x0) {
      local_12c = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_12c = LargeFormatSlotMachineUnit::vftable;
      *local_12c = SlotMachineSixShooter::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_12c;
    break;
  case 0xd:
    local_134 = operator_new(0x14);
    local_8 = 0xb;
    if (local_134 == (undefined4 *)0x0) {
      local_134 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_134 = LargeFormatSlotMachineUnit::vftable;
      *local_134 = SlotMachineColdCash::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_134;
    break;
  case 0xe:
    local_138 = operator_new(0x14);
    local_8 = 0xc;
    if (local_138 == (undefined4 *)0x0) {
      local_138 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_138 = LargeFormatSlotMachineUnit::vftable;
      *local_138 = SlotMachineShootingStars::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_138;
    break;
  case 0xf:
    local_13c = operator_new(0x14);
    local_8 = 0xd;
    if (local_13c == (undefined4 *)0x0) {
      local_13c = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_13c = LargeFormatSlotMachineUnit::vftable;
      *local_13c = SlotMachineWildWheel::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_13c;
    break;
  case 0x10:
    local_140 = operator_new(0x14);
    local_8 = 0xe;
    if (local_140 == (undefined4 *)0x0) {
      local_140 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_140 = LargeFormatSlotMachineUnit::vftable;
      *local_140 = SlotMachinePinataPayout::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_140;
    break;
  case 0x11:
    local_144 = operator_new(0x14);
    local_8 = 0xf;
    if (local_144 == (undefined4 *)0x0) {
      local_144 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_144 = LargeFormatSlotMachineUnit::vftable;
      *local_144 = SlotMachineSugarDaddy::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_144;
    break;
  case 0x12:
    local_130 = operator_new(0x14);
    local_8 = 10;
    if (local_130 == (undefined4 *)0x0) {
      local_130 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_130 = LargeFormatSlotMachineUnit::vftable;
      *local_130 = SlotMachineEmeraldOasis::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_130;
    break;
  case 0x13:
    local_150 = operator_new(0x14);
    local_8 = 0x12;
    if (local_150 == (undefined4 *)0x0) {
      local_150 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_150 = LargeFormatSlotMachineUnit::vftable;
      *local_150 = SlotMachineEmeraldOasis_3Line::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_150;
    break;
  case 0x14:
    local_154 = operator_new(0x14);
    local_8 = 0x13;
    if (local_154 == (undefined4 *)0x0) {
      local_154 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_154 = LargeFormatSlotMachineUnit::vftable;
      *local_154 = SlotMachineEmeraldOasis_5Line::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_154;
    break;
  case 0x15:
    local_16c = operator_new(0x14);
    local_8 = 0x19;
    if (local_16c == (undefined4 *)0x0) {
      local_16c = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_16c = LargeFormatSlotMachineUnit::vftable;
      *local_16c = SlotMachineEmeraldOasis_Prog::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_16c;
    break;
  case 0x16:
    local_14c = operator_new(0x14);
    local_8 = 0x11;
    if (local_14c == (undefined4 *)0x0) {
      local_14c = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_14c = LargeFormatSlotMachineUnit::vftable;
      *local_14c = SlotMachineRubyRiver::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_14c;
    break;
  case 0x17:
    local_158 = operator_new(0x14);
    local_8 = 0x14;
    if (local_158 == (undefined4 *)0x0) {
      local_158 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_158 = LargeFormatSlotMachineUnit::vftable;
      *local_158 = SlotMachineRubyRiver_3Line::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_158;
    break;
  case 0x18:
    local_15c = operator_new(0x14);
    local_8 = 0x15;
    if (local_15c == (undefined4 *)0x0) {
      local_15c = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_15c = LargeFormatSlotMachineUnit::vftable;
      *local_15c = SlotMachineRubyRiver_5Line::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_15c;
    break;
  case 0x19:
    local_170 = operator_new(0x14);
    local_8 = 0x1a;
    if (local_170 == (undefined4 *)0x0) {
      local_170 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_170 = LargeFormatSlotMachineUnit::vftable;
      *local_170 = SlotMachineRubyRiver_Prog::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_170;
    break;
  case 0x1a:
    local_148 = operator_new(0x14);
    local_8 = 0x10;
    if (local_148 == (undefined4 *)0x0) {
      local_148 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_148 = LargeFormatSlotMachineUnit::vftable;
      *local_148 = SlotMachineMargaritaMadness::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_148;
    break;
  case 0x1b:
    local_160 = operator_new(0x14);
    local_8 = 0x16;
    if (local_160 == (undefined4 *)0x0) {
      local_160 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_160 = LargeFormatSlotMachineUnit::vftable;
      *local_160 = SlotMachineMargaritaMadness_3Line::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_160;
    break;
  case 0x1c:
    local_164 = operator_new(0x14);
    local_8 = 0x17;
    if (local_164 == (undefined4 *)0x0) {
      local_164 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_164 = LargeFormatSlotMachineUnit::vftable;
      *local_164 = SlotMachineMargaritaMadness_5Line::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_164;
    break;
  case 0x1d:
    local_174 = operator_new(0x14);
    local_8 = 0x1b;
    if (local_174 == (undefined4 *)0x0) {
      local_174 = (undefined4 *)0x0;
    }
    else {
      FUN_00538560();
      *local_174 = LargeFormatSlotMachineUnit::vftable;
      *local_174 = SlotMachineMargaritaMadness_Prog::vftable;
    }
    local_8 = 0xffffffff;
    DAT_00793394 = local_174;
  }
  FUN_005385a0();
  ExceptionList = local_10;
  return;
}

