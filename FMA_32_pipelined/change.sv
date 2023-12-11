booth4_encoding booth4_encoding   (man_a,{man_b[1:0],1'b0},partial_product[0],5'd0);
booth4_encoding booth4_encoding2  (man_a,man_b[3:1],partial_product[1],5'd2);
booth4_encoding booth4_encoding3  (man_a,man_b[5:3],partial_product[2],5'd4);
booth4_encoding booth4_encoding4  (man_a,man_b[7:5],partial_product[3],5'd6);
booth4_encoding booth4_encoding5  (man_a,man_b[9:7],partial_product[4],5'd8);
booth4_encoding booth4_encoding6  (man_a,man_b[11:9],partial_product[5],5'd10);
booth4_encoding booth4_encoding7  (man_a,man_b[13:11],partial_product[6],5'd12);
booth4_encoding booth4_encoding8  (man_a,man_b[15:13],partial_product[7],5'd14);
booth4_encoding booth4_encoding9  (man_a,man_b[17:15],partial_product[8],5'd16);
booth4_encoding booth4_encoding10 (man_a,man_b[19:17],partial_product[9],5'd18);
booth4_encoding booth4_encoding11 (man_a,man_b[21:19],partial_product[10],5'd20);
booth4_encoding booth4_encoding12 (man_a,man_b[23:21],partial_product[11],5'd22);

new 