/*  Copyright 2004-2006, 2012 Theo Berkau

    This file is part of EventEditor.

    EventEditor is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    EventEditor is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with EventEditor; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
*/

#include "texttbl.h"

unsigned short texttbl[0x400] =
{
   0x8140, 0x8141, 0x8142, 0x8145, 0x8148, 0x8149, 0x8151, 0x8158, // 0x000
   0x815B, 0x8160, 0x8169, 0x816A, 0x8175, 0x8176, 0x817C, 0x8193, // 0x008
   0x818A, 0x824F, 0x8250, 0x8251, 0x8252, 0x8253, 0x8254, 0x8255, // 0x010
   0x8256, 0x8257, 0x8258, 0x8260, 0x8261, 0x8262, 0x8266, 0x826A, // 0x018
   0x826B, 0x826E, 0x826F, 0x8271, 0x8274, 0x829F, 0x82A0, 0x82A1, // 0x020
   0x82A2, 0x82A3, 0x82A4, 0x82A5, 0x82A6, 0x82A7, 0x82A8, 0x82A9, // 0x028
   0x82AA, 0x82AB, 0x82AC, 0x82AD, 0x82AE, 0x82AF, 0x82B0, 0x82B1, // 0x030
   0x82B2, 0x82B3, 0x82B4, 0x82B5, 0x82B6, 0x82B7, 0x82B8, 0x82B9, // 0x038
   0x82BA, 0x82BB, 0x82BC, 0x82BD, 0x82BE, 0x82BF, 0x82C0, 0x82C1, // 0x040
   0x82C2, 0x82C3, 0x82C4, 0x82C5, 0x82C6, 0x82C7, 0x82C8, 0x82C9, // 0x048
   0x82CA, 0x82CB, 0x82CC, 0x82CD, 0x82CE, 0x82CF, 0x82D0, 0x82D1, // 0x050
   0x82D2, 0x82D3, 0x82D4, 0x82D5, 0x82D6, 0x82D7, 0x82D8, 0x82D9, // 0x058
   0x82DA, 0x82DB, 0x82DC, 0x82DD, 0x82DE, 0x82DF, 0x82E0, 0x82E1, // 0x060
   0x82E2, 0x82E3, 0x82E4, 0x82E5, 0x82E6, 0x82E7, 0x82E8, 0x82E9, // 0x068
   0x82EA, 0x82EB, 0x82ED, 0x82F0, 0x82F1, 0x8340, 0x8341, 0x8342, // 0x070
   0x8343, 0x8344, 0x8345, 0x8346, 0x8347, 0x8348, 0x8349, 0x834A, // 0x078
   0x834B, 0x834C, 0x834D, 0x834E, 0x834F, 0x8350, 0x8351, 0x8352, // 0x080
   0x8353, 0x8354, 0x8355, 0x8356, 0x8357, 0x8358, 0x8359, 0x835A, // 0x088
   0x835B, 0x835C, 0x835D, 0x835E, 0x835F, 0x8360, 0x8362, 0x8363, // 0x090
   0x8365, 0x8366, 0x8367, 0x8368, 0x8369, 0x836A, 0x836B, 0x836C, // 0x098
   0x836D, 0x836E, 0x836F, 0x8370, 0x8371, 0x8372, 0x8373, 0x8374, // 0x0A0
   0x8375, 0x8376, 0x8377, 0x8378, 0x8379, 0x837A, 0x837B, 0x837C, // 0x0A8
   0x837D, 0x837E, 0x8380, 0x8381, 0x8382, 0x8383, 0x8384, 0x8385, // 0x0B0
   0x8386, 0x8387, 0x8388, 0x8389, 0x838A, 0x838B, 0x838C, 0x838D, // 0x0B8
   0x838F, 0x8393, 0x8394, 0x88A3, 0x88A4, 0x88AB, 0x88C0, 0x88C3, // 0x0C0
   0x88C4, 0x88C5, 0x88C8, 0x88CA, 0x88D3, 0x88D7, 0x88D9, 0x88DA, // 0x0C8
   0x88E1, 0x88EA, 0x88F3, 0x88F5, 0x88F6, 0x88F8, 0x88F9, 0x8942, // 0x0D0
   0x8945, 0x895E, 0x8965, 0x8968, 0x8969, 0x8973, 0x8979, 0x897A, // 0x0D8
   0x8980, 0x8987, 0x898A, 0x8993, 0x8996, 0x899C, 0x899F, 0x89A1, // 0x0E0
   0x89A4, 0x89A9, 0x89AE, 0x89B4, 0x89B6, 0x89B9, 0x89BA, 0x89BB, // 0x0E8
   0x89BC, 0x89BD, 0x89C1, 0x89C2, 0x89C6, 0x89CA, 0x89CC, 0x89CE, // 0x0F0
   0x89D4, 0x89D7, 0x89D8, 0x89DD, 0x89DF, 0x89E4, 0x89E6, 0x89EF, // 0x0F8
   0x89F0, 0x89F1, 0x89F2, 0x89F3, 0x89F6, 0x89F7, 0x8A43, 0x8A45, // 0x100
   0x8A46, 0x8A47, 0x8A4A, 0x8A4B, 0x8A4F, 0x8A51, 0x8A58, 0x8A65, // 0x108
   0x8A69, 0x8A6D, 0x8A6F, 0x8A70, 0x8A79, 0x8A88, 0x8AA5, 0x8AAA, // 0x110
   0x8AAB, 0x8AAE, 0x8AAF, 0x8AB4, 0x8AB8, 0x8AC2, 0x8AC8, 0x8ACF, // 0x118
   0x8AD4, 0x8AD6, 0x8AD9, 0x8ADB, 0x8AE2, 0x8AE7, 0x8AE8, 0x8AEB, // 0x120
   0x8AEC, 0x8AED, 0x8AF1, 0x8AF3, 0x8AFA, 0x8B40, 0x8B41, 0x8B43, // 0x128
   0x8B46, 0x8B4D, 0x8B4E, 0x8B50, 0x8B51, 0x8B52, 0x8B55, 0x8B5A, // 0x130
   0x8B71, 0x8B74, 0x8B76, 0x8B77, 0x8B78, 0x8B7B, 0x8B7D, 0x8B7E, // 0x138
   0x8B81, 0x8B83, 0x8B89, 0x8B8E, 0x8B8F, 0x8B90, 0x8B92, 0x8B96, // 0x140
   0x8B9B, 0x8B9F, 0x8BA4, 0x8BA5, 0x8BA6, 0x8BAB, 0x8BAD, 0x8BB0, // 0x148
   0x8BB3, 0x8BBB, 0x8BBD, 0x8BC1, 0x8BC2, 0x8BC6, 0x8BC8, 0x8BC9, // 0x150
   0x8BCA, 0x8BD5, 0x8BD6, 0x8BD8, 0x8BDF, 0x8BE0, 0x8BE1, 0x8BE2, // 0x158
   0x8BEA, 0x8BEF, 0x8BF3, 0x8BFC, 0x8C40, 0x8C41, 0x8C4A, 0x8C4E, // 0x160
   0x8C51, 0x8C52, 0x8C57, 0x8C5A, 0x8C60, 0x8C68, 0x8C6E, 0x8C6F, // 0x168
   0x8C70, 0x8C78, 0x8C79, 0x8C82, 0x8C87, 0x8C88, 0x8C8B, 0x8C8C, // 0x170
   0x8C8E, 0x8C8F, 0x8C94, 0x8C95, 0x8C9A, 0x8CA9, 0x8CAB, 0x8CAF, // 0x178
   0x8CB1, 0x8CB3, 0x8CB4, 0x8CB5, 0x8CB6, 0x8CB8, 0x8CB9, 0x8CBB, // 0x180
   0x8CBE, 0x8CC0, 0x8CC3, 0x8CC4, 0x8CC5, 0x8CCC, 0x8CCE, 0x8CD6, // 0x188
   0x8CE3, 0x8CE4, 0x8CEA, 0x8CEC, 0x8CF0, 0x8CF5, 0x8CF6, 0x8CF8, // 0x190
   0x8CFB, 0x8CFC, 0x8D44, 0x8D46, 0x8D48, 0x8D4B, 0x8D4C, 0x8D55, // 0x198
   0x8D5C, 0x8D60, 0x8D6C, 0x8D72, 0x8D73, 0x8D77, 0x8D7A, 0x8D7E, // 0x1A0
   0x8D82, 0x8D86, 0x8D87, 0x8D8F, 0x8D90, 0x8D91, 0x8D95, 0x8D9E, // 0x1A8
   0x8DA0, 0x8DA1, 0x8DA2, 0x8DA5, 0x8DA6, 0x8DB0, 0x8DB6, 0x8DB7, // 0x1B0
   0x8DB8, 0x8DBD, 0x8DC4, 0x8DC5, 0x8DD5, 0x8DD7, 0x8DDB, 0x8DDD, // 0x1B8
   0x8DDE, 0x8DDF, 0x8DE0, 0x8DE7, 0x8DEC, 0x8DF5, 0x8E45, 0x8E4F, // 0x1C0
   0x8E51, 0x8E52, 0x8E55, 0x8E59, 0x8E61, 0x8E63, 0x8E64, 0x8E67, // 0x1C8
   0x8E69, 0x8E6A, 0x8E6C, 0x8E6D, 0x8E6E, 0x8E6F, 0x8E70, 0x8E71, // 0x1D0
   0x8E74, 0x8E75, 0x8E76, 0x8E77, 0x8E7E, 0x8E80, 0x8E84, 0x8E86, // 0x1D8
   0x8E8D, 0x8E8E, 0x8E91, 0x8E95, 0x8E96, 0x8E97, 0x8E9D, 0x8E9E, // 0x1E0
   0x8E9F, 0x8EA1, 0x8EA6, 0x8EA8, 0x8EA9, 0x8EAE, 0x8EAF, 0x8EB8, // 0x1E8
   0x8EBA, 0x8EBF, 0x8EC0, 0x8ECB, 0x8ECC, 0x8ECD, 0x8ED2, 0x8ED3, // 0x1F0
   0x8ED7, 0x8ED8, 0x8EE1, 0x8EE3, 0x8EE5, 0x8EE6, 0x8EE7, 0x8EE8, // 0x1F8
   0x8EED, 0x8EF0, 0x8EF1, 0x8EF3, 0x8EF4, 0x8EF6, 0x8EF7, 0x8EFC, // 0x200
   0x8F43, 0x8F45, 0x8F49, 0x8F4B, 0x8F50, 0x8F57, 0x8F5A, 0x8F5C, // 0x208
   0x8F5D, 0x8F62, 0x8F64, 0x8F68, 0x8F6A, 0x8F6F, 0x8F70, 0x8F75, // 0x210
   0x8F80, 0x8F82, 0x8F87, 0x8F89, 0x8F8A, 0x8F8F, 0x8F91, 0x8F95, // 0x218
   0x8F97, 0x8F9D, 0x8F9F, 0x8FA2, 0x8FA4, 0x8FA5, 0x8FAB, 0x8FAC, // 0x220
   0x8FAD, 0x8FAF, 0x8FB3, 0x8FB5, 0x8FC1, 0x8FC4, 0x8FC6, 0x8FCC, // 0x228
   0x8FCD, 0x8FCE, 0x8FD8, 0x8FDA, 0x8FDC, 0x8FE3, 0x8FE4, 0x8FE6, // 0x230
   0x8FE9, 0x8FEA, 0x8FEC, 0x8FED, 0x8FEE, 0x8FF1, 0x9041, 0x9045, // 0x238
   0x9046, 0x9047, 0x9048, 0x904D, 0x9051, 0x9053, 0x9055, 0x9056, // 0x240
   0x9058, 0x905B, 0x905C, 0x905E, 0x905F, 0x9065, 0x9067, 0x9069, // 0x248
   0x906B, 0x906C, 0x9077, 0x907D, 0x9081, 0x9085, 0x9094, 0x90A2, // 0x250
   0x90A6, 0x90AB, 0x90AC, 0x90AD, 0x90AE, 0x90AF, 0x90B0, 0x90B3, // 0x258
   0x90B6, 0x90B8, 0x90B9, 0x90BA, 0x90BC, 0x90C2, 0x90C3, 0x90CC, // 0x260
   0x90CE, 0x90D3, 0x90D4, 0x90D8, 0x90DA, 0x90DD, 0x90E0, 0x90E2, // 0x268
   0x90E6, 0x90E7, 0x90ED, 0x90FC, 0x9144, 0x9149, 0x914F, 0x9152, // 0x270
   0x9153, 0x915F, 0x9163, 0x9166, 0x9167, 0x916D, 0x916E, 0x916F, // 0x278
   0x9174, 0x917A, 0x917B, 0x9180, 0x9181, 0x9183, 0x9188, 0x918A, // 0x280
   0x918B, 0x9190, 0x9195, 0x9196, 0x9197, 0x919B, 0x919C, 0x919D, // 0x288
   0x919E, 0x919F, 0x91A2, 0x91A4, 0x91A6, 0x91A7, 0x91A9, 0x91AB, // 0x290
   0x91AC, 0x91AF, 0x91B0, 0x91B1, 0x91B2, 0x91B6, 0x91B7, 0x91B8, // 0x298
   0x91BA, 0x91BC, 0x91BD, 0x91BE, 0x91C5, 0x91CA, 0x91CC, 0x91CE, // 0x2A0
   0x91CF, 0x91D2, 0x91D5, 0x91DD, 0x91DE, 0x91E0, 0x91E3, 0x91E5, // 0x2A8
   0x91E6, 0x91E8, 0x9242, 0x9244, 0x9245, 0x9247, 0x924E, 0x9250, // 0x2B0
   0x9254, 0x925A, 0x925B, 0x9262, 0x9263, 0x9266, 0x9269, 0x926A, // 0x2B8
   0x926B, 0x926C, 0x926D, 0x926E, 0x9275, 0x9278, 0x927A, 0x9283, // 0x2C0
   0x9285, 0x9286, 0x9287, 0x928B, 0x928C, 0x928D, 0x929B, 0x92A3, // 0x2C8
   0x92A7, 0x92A9, 0x92AC, 0x92AE, 0x92B2, 0x92B7, 0x92B9, 0x92BC, // 0x2D0
   0x92BE, 0x92BF, 0x92C7, 0x92C9, 0x92CA, 0x92DC, 0x92E0, 0x92E1, // 0x2D8
   0x92E8, 0x92E9, 0x92EB, 0x92F1, 0x9347, 0x9349, 0x9356, 0x9358, // 0x2E0
   0x935D, 0x935F, 0x9360, 0x9361, 0x9366, 0x936B, 0x936E, 0x9372, // 0x2E8
   0x9373, 0x9377, 0x9378, 0x9379, 0x937A, 0x937B, 0x937C, 0x9380, // 0x2F0
   0x9383, 0x9387, 0x938A, 0x938C, 0x9390, 0x9396, 0x939A, 0x939D, // 0x2F8
   0x93A2, 0x93A5, 0x93A6, 0x93AA, 0x93AC, 0x93AD, 0x93AE, 0x93AF, // 0x300
   0x93B1, 0x93B4, 0x93B5, 0x93B9, 0x93BE, 0x93C1, 0x93C5, 0x93C7, // 0x308
   0x93CB, 0x93CD, 0x93DC, 0x93E0, 0x93EC, 0x93EF, 0x93F0, 0x93F1, // 0x310
   0x93F7, 0x93FA, 0x93FB, 0x93FC, 0x9443, 0x9445, 0x9446, 0x944C, // 0x318
   0x944D, 0x944E, 0x944F, 0x9459, 0x945B, 0x945C, 0x9467, 0x9468, // 0x320
   0x946A, 0x946E, 0x9471, 0x9473, 0x9474, 0x9477, 0x947A, 0x9483, // 0x328
   0x9484, 0x9491, 0x9492, 0x949B, 0x94AD, 0x94AF, 0x94B0, 0x94B1, // 0x330
   0x94B2, 0x94BB, 0x94BC, 0x94BD, 0x94C3, 0x94D3, 0x94D4, 0x94DE, // 0x338
   0x94DF, 0x94E0, 0x94E4, 0x94E6, 0x94E9, 0x94ED, 0x94EF, 0x94F0, // 0x340
   0x94F1, 0x94F2, 0x94F5, 0x94F7, 0x94FC, 0x9543, 0x954B, 0x9550, // 0x348
   0x9553, 0x9558, 0x955C, 0x9560, 0x9561, 0x9569, 0x9573, 0x9574, // 0x350
   0x9576, 0x957C, 0x957E, 0x9581, 0x9582, 0x9583, 0x9588, 0x9589, // 0x358
   0x9590, 0x9591, 0x9594, 0x9595, 0x9597, 0x959C, 0x959E, 0x959F, // 0x360
   0x95A0, 0x95A5, 0x95A8, 0x95AA, 0x95B2, 0x95B6, 0x95B7, 0x95BA, // 0x368
   0x95BD, 0x95C0, 0x95C2, 0x95C3, 0x95CA, 0x95CF, 0x95D0, 0x95D2, // 0x370
   0x95D3, 0x95D4, 0x95D6, 0x95D7, 0x95DB, 0x95DF, 0x95E0, 0x95E6, // 0x378
   0x95E9, 0x95EA, 0x95EF, 0x95F1, 0x95F3, 0x95FA, 0x95FB, 0x9640, // 0x380
   0x964B, 0x9653, 0x9656, 0x9658, 0x9659, 0x965A, 0x965C, 0x965D, // 0x388
   0x965F, 0x9660, 0x9668, 0x966B, 0x966C, 0x967B, 0x9682, 0x9685, // 0x390
   0x9688, 0x9696, 0x969C, 0x969D, 0x969E, 0x96A1, 0x96A2, 0x96A7, // 0x398
   0x96AF, 0x96B0, 0x96B1, 0x96B2, 0x96B3, 0x96BA, 0x96BC, 0x96BD, // 0x3A0
   0x96BE, 0x96C0, 0x96C2, 0x96C5, 0x96CA, 0x96D8, 0x96DA, 0x96DF, // 0x3A8
   0x96E2, 0x96E4, 0x96E5, 0x96E8, 0x96E9, 0x96EA, 0x96EC, 0x96EE, // 0x3B0
   0x96F0, 0x96F1, 0x96F2, 0x96F3, 0x96F4, 0x96FC, 0x9744, 0x9745, // 0x3B8
   0x9746, 0x9748, 0x974C, 0x9752, 0x9756, 0x975C, 0x975E, 0x9761, // 0x3C0
   0x9762, 0x9763, 0x9764, 0x9765, 0x9768, 0x976C, 0x9770, 0x9774, // 0x3C8
   0x9776, 0x977A, 0x977E, 0x9783, 0x9788, 0x978A, 0x978B, 0x978E, // 0x3D0
   0x9790, 0x9798, 0x979D, 0x97A0, 0x97A2, 0x97A3, 0x97A4, 0x97A6, // 0x3D8
   0x97A7, 0x97AC, 0x97B3, 0x97B7, 0x97BC, 0x97BF, 0x97C7, 0x97CD, // 0x3E0
   0x97D6, 0x97D7, 0x97DC, 0x97DE, 0x97DF, 0x97E2, 0x97E7, 0x97EC, // 0x3E8
   0x97F0, 0x97FB, 0x9841, 0x9842, 0x9848, 0x984A, 0x9856, 0x9861, // 0x3F0
   0x9862, 0x9872, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000  // 0x3F8
};