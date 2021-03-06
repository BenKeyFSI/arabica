<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">

  <!-- FileName: COPY13 -->
  <!-- Document: http://www.w3.org/TR/xslt -->
  <!-- DocVersion: 19991116 -->
  <!-- Section: 11.3 -->
  <!-- Creator: David Marston -->
  <!-- Purpose: Test for copy-of with '*' wildcard pattern -->
  <!-- This test also checks handling of comments by copy-of. -->

<xsl:template match="/">
  <out>
    <xsl:copy-of select="*"/>
  </out>
</xsl:template>

</xsl:stylesheet>
